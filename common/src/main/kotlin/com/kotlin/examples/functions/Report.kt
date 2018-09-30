package com.kotlin.examples.functions

class Report(private val listElements: List<String>, private val label: String) {

    fun draw() {
        listElements.filterForCondition { it != label }
    }
}


fun <T> List<T>.filterForCondition(condition: (T) -> Boolean): List<T> {
    val result = mutableListOf<T>()
    for (item in this) {
        if (condition(item)) {
            result.add(item)
        }
    }

    return result
}