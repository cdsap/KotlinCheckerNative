package com.kotlin.examples.interfaces

import com.kotlin.examples.entities.Place
import com.kotlin.examples.entities.PlaceDefaultArguments

interface GetPlace {
    fun getPlace(): Place
}

interface GetPlaceDefault {
    fun getPlace(): PlaceDefaultArguments = PlaceDefaultArguments()
}


class GetPlaceImpl : GetPlace {
    override fun getPlace(): Place {
        val placeId = Place.Id(0, "1")
        return Place(id = 0,
                area = placeId,
                city = placeId,
                country = placeId,
                location = Place.Location(0.0, 0.0),
                name = "a",
                propertiesNumber = 1,
                searchType = 1,
                state = placeId,
                subtype = 1,
                type = 1
        )
    }

}


class GetPlaceDefaultImpl : GetPlaceDefault