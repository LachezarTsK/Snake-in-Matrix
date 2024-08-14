
package main

import "fmt"

func finalPositionOfSnake(sideOfSquareMatrix int, commands []string) int {
    horizontalPosition := 0
    verticalPosition := 0

    for _, command := range commands {
        switch command {
        case "LEFT":
            horizontalPosition--
        case "RIGHT":
            horizontalPosition++
        case "DOWN":
            verticalPosition++
        case "UP":
            verticalPosition--
        }
    }
    return verticalPosition * sideOfSquareMatrix + horizontalPosition
}
