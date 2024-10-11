import { useState } from "react"
import { useFetch } from "../hooks/useFetch";
import "./cepCard.css";

export function CepCard() {
    const [urlCep, setUrlCep] = useState(null);
    const [dadosCep] = useFetch(urlCep)

    console.log(dadosCep)

    function handleSubmit(event) {
        event.preventDefault()
        const formData = new FormData(event.target)
        const cep = formData.get("cep")
        setUrlCep(`https://viacep.com.br/ws/${cep}/json/`)
    }

    return (
        <section>
            <form onSubmit={handleSubmit}>
                <label>Cep:</label>
                <input name="cep" type="text" />
                <button type="submit">Pesquisar</button>
            </form>
            {dadosCep &&
                <p>
                    Cep: {dadosCep.cep} <br/>
                    Cidade: {dadosCep.localidade}<br/>
                    Estado: {dadosCep.estado}<br/>
                    DDD: {dadosCep.ddd}<br/>
                </p>}
        </section>
    )
}