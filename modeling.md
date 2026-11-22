```mermaid
    classDiagram
        class Game {
            - int score
            - string player
            - FILE* scores

            + launch() void
            + calculateScore() int
            + isEndOfGame() bool
        }

        class Grid {
            - int size
            - vector ~ Tile ~ tiles

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
            + setValue(int) void
            + setIsMerged(bool) void
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