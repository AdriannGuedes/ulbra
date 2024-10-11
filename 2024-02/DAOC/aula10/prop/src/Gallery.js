import { useState } from "react";
import ButtonNext from "./ButtonNext";
import Header from "./Header";
import Image from "./Image";
import ShowDetails from "./ShowDetails";
import { data } from "./data";


function Gallery() {
    const [index, setIndex] = useState(0)

    function handleClickIndex(){
        setIndex(index+1)
    }

    let galleryData = data[index]
    return (
        <div style={{ height: "400px,", width: "100%" }}>
            <ButtonNext />
            <Header tittle={"Aoba"} sizeList={12} index={4} />
            <ShowDetails />
            <Image urlImg="https://i.imgur.com/Mx7dA2Y.jpg" />
        </div>
    )
}

export default Gallery;