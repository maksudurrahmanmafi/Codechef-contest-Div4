import java.util.*

fun main(args: Array<String>) {

     val n = readLine()!!.toInt()
    val arr = readLine()!!.split(" ").map { it.toInt() }

    val list = mutableListOf<Pair<Int, Int>>()

    for (i in 0 until n) {
        list.add(Pair(arr[i], i + 1))
    }

    val sorted = list.sortedWith(compareBy({ it.first }, { it.second }))

    println(sorted[0].second)
	
}