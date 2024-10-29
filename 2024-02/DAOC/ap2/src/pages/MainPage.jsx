import React, { useEffect, useState } from 'react';
import { useLocation } from 'react-router-dom';
import Prop from '../components/inicioMain/olaProp'
import Card from '../components/card/Card';
import './mainPage.css';

function MainPage() {
    const [cards, setCards] = useState([]);

    const loadCardsFromStorage = () => {
        const savedCards = JSON.parse(localStorage.getItem("cards")) || [];
        setCards(savedCards);
    };

    const handleDelete = (index) => {
        const updatedCards = cards.filter((_, i) => i !== index);
        setCards(updatedCards);
        localStorage.setItem("cards", JSON.stringify(updatedCards)); // Atualiza o localStorage
    };

    useEffect(() => {
        loadCardsFromStorage();
    }, []);

    const location = useLocation();
    const { nome, telefone, url, opcao, pago, cepInfo } = location.state || {};

    return (
        <>
            {nome ? (
                <Prop nome={nome} cepInfo={cepInfo} />
            ) : (
                <p>Carregando informações...</p>
            )}
            <div className='card-list'>
                {cards.length > 0 ? (
                    cards.map((card, index) => (
                        <Card
                            key={index}
                            nome={card.nome}
                            telefone={card.telefone}
                            url={card.url}
                            opcao={card.opcao}
                            pago={card.pago}
                            cepInfo={card.cepInfo}
                            onDelete={() => handleDelete(index)}
                        />
                    ))
                ) : (
                    <p>Não há cards para exibir.</p>
                )}

            </div>
        </>
    )
}


export default MainPage;