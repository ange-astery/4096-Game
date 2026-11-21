```mermaid
    classDiagram
        class Game {
            - int score
            - string player
            - file* scores

            + launch() void
            + calculateScore() int
            + isEndOfGame() bool
        }

        class Grid {
            - int size
            - vector ~ Tile ~ tiles

            + move(Direction dir) void
            + spawnTile() bool
            + checkSGridSpace() bool
            + mergeTiles(Tile t1, Tile t2) void
        }

        class Tile {
            - int value
            - bool isMerged

            + getValue() int
        }

        class Direction {
            <<enum>>
            UP
            DOWN
            LEFT
            RIGHT
        }

        Grid "1" *-- "*" Tile
        Grid <.. Direction
        Game "1" <-- "1" Grid : possede