import React, { useState } from 'react';
import './inicioMain.css';

function olaProp({ nome, cepInfo }) {

  // eslint-disable-next-line react-hooks/rules-of-hooks
  const [showLocation, setShowLocation] = useState(false);


  const viewLoc = () => {
    setShowLocation((prevShowLocation) => !prevShowLocation);
  };


  return (
    <div className='inicio'>
      <h2>Olá, {nome}!</h2>
      <button onClick={viewLoc}>
        {showLocation ? 'Ocultar Localização' : 'Mostrar Localização'}
      </button>

      {showLocation && cepInfo && (
        <div className='localizacao-container'>
          <h3>Dados da sua Localização:</h3>
          <div className='localizacao-info'>
            <p>CEP: {cepInfo.cep}</p>
            <p>Logradouro: {cepInfo.logradouro}</p>
            <p>Bairro: {cepInfo.bairro}</p>
            <p>Cidade: {cepInfo.localidade}</p>
            <p>Estado: {cepInfo.uf}</p>
          </div>
        </div>
      )}
    </div>
  );
}

export default olaProp;