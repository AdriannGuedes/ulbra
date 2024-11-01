import React, { useState } from "react";
import ContatoForm from "../components/Form/Form";
import "./Contato.css"

function Contato() {
    const [pessoas, setPessoas] = useState([]);

    const adicionarPessoa = (novaPessoa) => {
        setPessoas([...pessoas, novaPessoa]);
    };

    return (
        <div className="contato-container">
            <h1 className="contato-titulo">Contato</h1>
            <ContatoForm adicionarPessoa={adicionarPessoa} />
            <div className="contato-lista">
                <h2 className="contato-subtitulo">Lista de Contatos</h2>
                <ul className="contato-lista-itens">
                    {pessoas.map((pessoa, index) => (
                        <li key={index} className="contato-item">
                            {pessoa.nome} - {pessoa.email}
                        </li>
                    ))}
                </ul>
            </div>
        </div>
    );
}

export default Contato;