fun main(){
    print("Enter your 1st value: ")
    var first = readln().toIntOrNull()
    print("Enter your 2nd value: ")
    var second = readln().toIntOrNull()
    print("Enter your 3rd value: ")
    var third = readln().toIntOrNull()
    if(first==null||second==null||third==null){
        print("Invalid Input")
        return
    }
    else{
        if(first+second+third==180)print("Valid")
        else print("Invalid")
    }


}