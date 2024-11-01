import React, { useState } from "react";
import "./Form.css"

function ContatoForm({ adicionarPessoa }) {
    const [nome, setNome] = useState("");
    const [email, setEmail] = useState("");

    const handleSubmit = (e) => {
        e.preventDefault();
        adicionarPessoa({ nome, email });
        setNome("");
        setEmail("");
    };

    return (
        <form onSubmit={handleSubmit} className="formulario">
            <label className="rotulo">
                Nome:
                <input
                    type="text"
                    value={nome}
                    onChange={(e) => setNome(e.target.value)}
                    required
                    className="entrada"
                />
            </label>
            <br />
            <label className="rotulo">
                Email:
                <input
                    type="email"
                    value={email}
                    onChange={(e) => setEmail(e.target.value)}
                    required
                    className="entrada"
                />
            </label>
            <br />
            <button type="submit" className="botao-enviar">Adicionar</button>
        </form>
    );
}

export default ContatoForm;