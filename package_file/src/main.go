package main
import (
	"../../package_file/tempconv"
	"fmt"
)

func main(){
	var a int = 10
	var b int = 20

	f := tempconv.Fahrenheit(b)
	c := tempconv.Celsius(a)

	fmt.Println("c2f:", tempconv.CToF(c))
	fmt.Println("f2c:", tempconv.FToC(f))
}