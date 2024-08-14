
import java.util.List;

public class Solution {

    public int finalPositionOfSnake(int sideOfSquareMatrix, List<String> commands) {
        int horizontalPosition = 0;
        int verticalPosition = 0;

        for (String command : commands) {
            switch (command) {
                case "LEFT" ->
                    --horizontalPosition;
                case "RIGHT" ->
                    ++horizontalPosition;
                case "DOWN" ->
                    ++verticalPosition;
                case "UP" ->
                    --verticalPosition;
            }
        }
        return verticalPosition * sideOfSquareMatrix + horizontalPosition;
    }
}
