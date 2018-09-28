package com.kotlin.examples.entities

data class Place(
        val id: Int,
        val type: Int,
        val subtype: Int,
        val searchType: Int,
        val name: String,
        val propertiesNumber: Int,
        val location: Location,
        val area: Id?,
        val city: Id?,
        val state: Id?,
        val country: Id?
) {

    data class Id(
            val id: Int,
            val name: String
    )

    data class Location(
            val latitude: Double,
            val longitude: Double
    )

}


data class PlaceDefaultArguments(
        val id: Int = 1,
        val type: Int = 2,
        val subtype: Int = 3,
        val searchType: Int = 2,
        val name: String = "",
        val propertiesNumber: Int = 2
)