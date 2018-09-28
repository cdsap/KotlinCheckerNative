package com.kotlin.examples.sealed

sealed class Status {
    object Failed : Status()
    class Approved(val points: Int) : Status()
}

class Calculate {

    fun calculate(status: Status) =
            when (status) {
                is Status.Failed -> "failed try again"
                is Status.Approved -> "Approved with ${status.points}"
            }
}

