# so_long

## Contents

1. [Project Overview](#1-Project-overview)
2. [Project Structure](#2-Project-Structure)
3. [Description of individual steps](#3-Description-of-individual-steps)

## 1. Project overview

In this project we had to make a very small 2D game. In this game the player needs to collect all collectables on the map and then enter the exit. The purpose of the project was to work with textures, sprites and further basic gameplay elements. Moreover, it is the first project in which we had to work with an external library the [MLX42](https://github.com/codam-coding-college/MLX42).

## 2. Project Structure

1. [Parsing](#parsing)
2. Graphical Aspects
3. Game Loop

## 3. Description of individual steps

### Parsing

The parser in the so_long project is responsible for validating the game map to ensure it meets all requirements specified by the project guidelines. It verifies that the map file is not empty and checks that the layout forms a valid rectangle, with all rows having an equal length. The parser also confirms that only allowed characters are used within the map, namely walls (1), empty spaces (0), player (P), exit (E), and collectables (C). Additionally, it ensures there are no duplicate exits or players on the map, verifies the presence of at least one collectable, and, using a flood-fill algorithm, confirms that the player can reach all collectables and the exit from the starting position.

A valid map looks like this:

```
1111111111111
1001000000PC1
1000011111001
100011E000001
1111111111111
```


###

## 4. How to run
