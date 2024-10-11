import { useState } from "react";

function ShowDetails(){
    const [enable, setEnable] = useState(false);

    function handleClickEnableDetails(){
        setEnable(!enable)
    }

    return(
        <div>
            {enable && <p>Oi</p>}
            <button onClick={handleClickEnableDetails}>{enable ? "Hide" : "Show"} Details</button>
        </div>
    )
}

export default ShowDetails;