import java.util.Scanner

fun main() {
    val sc = Scanner(System.`in`)
    if (!sc.hasNextInt()) return

    val curupira = sc.nextInt()
    val boitata = sc.nextInt()
    val boto = sc.nextInt()
    val mapinguari = sc.nextInt()
    val iara = sc.nextInt()

    val total = (curupira * 300) + (boitata * 1500) + (boto * 600) + (mapinguari * 1000) + (iara * 150) + 225
    println(total)
}