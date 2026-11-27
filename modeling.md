```mermaid
    classDiagram
        class Game {
            - int score
            - string player
            - string scoresFilePath

            + launch() void
            + calculateScore() int
            + isEndOfGame() bool
        }

        class Grid {
            - int size
            - vector ~ Tile ~ tiles

            + display() void
            + canMove() bool
            + move(Direction dir) int
            + spawnTile() bool
            + checkGridSpace() bool
            - mergeTiles(Tile& t1, Tile& t2) void
        }

        class Tile {
            - int value
            - bool isMerged

            + getValue() int
            + setValue(int v) void
            + getIsMerged() bool
            + setIsMerged(bool) void
            + isEmpty() bool
        }

        class Direction {
            <<enumeration>>
            UP
            DOWN
            LEFT
            RIGHT
        }

        Grid "1" *-- "*" Tile
        Direction <.. Grid
        Grid "1" <-- "1" Game : possede