import java.util.Scanner

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    while (sc.hasNextInt()) {
        val n = sc.nextInt()
        println(n - 1)
    }
}