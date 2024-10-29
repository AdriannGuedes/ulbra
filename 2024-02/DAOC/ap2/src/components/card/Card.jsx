import React from 'react';
import './Card.css';

function Card({ nome, telefone, url, opcao, pago, onDelete }) {
    return (
        <>
            <div className="card-container">
                <img src={url} alt={`${nome}`} className="card-image" />
                <h2 className="card-title">{nome}</h2>
                <h2 className="card-phone">{telefone}</h2>
                <p className="card-info">{opcao === 'egresso' ? 'Egresso' : 'Convidado'}</p>
                <p className="card-status">{pago === 'sim' ? 'Pago' : 'Pendente'}</p>
                <button className="delete-button" onClick={onDelete}>Excluir</button>
            </div>
        </>
    );
}

export default Card;