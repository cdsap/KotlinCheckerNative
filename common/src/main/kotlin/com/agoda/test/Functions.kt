class Functions {
    fun execute(func: () -> Unit) {
        func
    }

    fun aux() {
        execute {
            println("skksksk")
        }
    }
}