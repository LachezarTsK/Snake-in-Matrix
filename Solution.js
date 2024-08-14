
/**
 * @param {number} sideOfSquareMatrix
 * @param {string[]} commands
 * @return {number}
 */
var finalPositionOfSnake = function (sideOfSquareMatrix, commands) {
    let horizontalPosition = 0;
    let verticalPosition = 0;

    for (let command of commands) {
        switch (command) {
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
        }
    }
    return verticalPosition * sideOfSquareMatrix + horizontalPosition;
};
