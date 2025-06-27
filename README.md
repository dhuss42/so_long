# so_long

<p align="center">
  <img src="https://github.com/user-attachments/assets/66a888cd-d479-485a-a9ea-3f7dc0cbda7e" alt="Bildschirmfoto 2025-06-27 um 09 24 54">
</p>

## Contents

1. [Project Overview](#1-Project-overview)
2. [Project Structure](#2-Project-Structure)
3. [Description of individual steps](#3-Description-of-individual-steps)
4. [How to run](#4-How-to-run)

## 1. Project overview

In this project we had to make a very small 2D game. In this game the player needs to collect all collectables on the map and then enter the exit. The purpose of the project was to work with textures, sprites and further basic gameplay elements. Moreover, it is the first project in which we had to work with an external library the [MLX42](https://github.com/codam-coding-college/MLX42).

## 2. Project Structure

1. [Parsing](#parsing)
2. [Window Setup and Texture Rendering](#Window-Setup-and-Texture-Rendering)
3. [Game Logic and Input Handling](#Game-Logic-and-Input-Handling)

## 3. Description of individual steps

### Parsing

The parser in the so_long project is responsible for validating the game map to ensure it meets all requirements specified by the project guidelines. It verifies that the map file is not empty and checks that the layout forms a valid rectangle, with all rows having an equal length. The parser also confirms that only allowed characters are used within the map, namely walls (1), empty spaces (0), player (P), exit (E), and collectables (C). Additionally, it ensures there are no duplicate exits or players on the map, verifies the presence of at least one collectable, and, using a flood-fill algorithm, confirms that the player can reach all collectables and the exit from the starting position.

These are examples of a valid and an invalid map:

```
valid map             invalid map

1111111111111         11111111111
1001000000PC1         1P000000011
1000011111001         101100C0101
100011E000001         1C1C00010E1
1111111111111         11111111111
```


### Window Setup and Texture Rendering

This part sets up the foundational graphics for the game by initializing the game window and loading the necessary textures. First, it prepares the game display with 'mlx_init', defining the dimensions based on the map size, while ensuring the window is not maximized. After this, textures for the floor, walls, collectables, exit, and player are loaded with 'handle_textures'. Each texture is sourced from a specific PNG file path. Once the textures are ready, 'fill_map' arranges these graphical elements according to the map data. Each character in the map array is interpreted as a specific game element (walls, floor, exit) and displayed in the window at its respective position using 'mlx_image_to_window'. Finally, the player’s position is rendered last to ensure it appears in the foreground.

### Game Logic and Input Handling

This section orchestrates the core gameplay loop, including player movement, map updates, and live interaction within the game window. The code enables smooth movement by capturing keyboard input to control the player’s position within the grid. Through 'handle_input', it validates each move, increments the move counter, and manages interactions with game elements like collectables and the exit, closing the game window when all collectables are gathered. The player's moves are displayed on-screen through 'display_moves', which updates the count in real time at the bottom of the game window. The 'my_keyhook' function manages these inputs and ensures the game view accurately reflects each interaction by invoking 'update_map' and redrawing elements based on the player’s actions.

## 4. How to run

Clone repository
```
git clone https://github.com/dhuss42/so_long.git so_long
```

navigate into repository
```
cd so_long
```

run make
```
make
```

make sure to have cmake installed or the MLX42 will throw an error
