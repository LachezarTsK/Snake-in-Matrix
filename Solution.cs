
using System;

public class Solution
{
    public int FinalPositionOfSnake(int sideOfSquareMatrix, IList<string> commands)
    {
        int horizontalPosition = 0;
        int verticalPosition = 0;

        foreach (string command in commands)
        {
            switch (command)
            {
                case "LEFT":
                    --horizontalPosition;
                    break;
                case "RIGHT":
                    ++horizontalPosition;
                    break;
                case "DOWN":
                    ++verticalPosition;
                    break;
                case "UP":
                    --verticalPosition;
                    break;
            }
        }
        return verticalPosition * sideOfSquareMatrix + horizontalPosition;
    }
}
