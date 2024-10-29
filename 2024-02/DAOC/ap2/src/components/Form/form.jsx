import { useState } from "react"
import './form.css'
import { useNavigate } from "react-router-dom"; 
import { fetchCep } from "../../hooks/useFetch";

function Form() {

  const [formData, setFormData] = useState({
    nome: "",
    telefone: "",
    url: "",
    opcao: "sim",
    pago: "nao", 
  });

  const loadCardsFromStorage = () => {
    const savedCards = JSON.parse(localStorage.getItem("cards")) || [];
    return savedCards;
  };

  const saveCard = (newCard) => {
    const existingCards = loadCardsFromStorage();
    const updatedCards = [...existingCards, newCard];
    localStorage.setItem("cards", JSON.stringify(updatedCards));
  };

  const [cepInfo, setCepInfo] = useState(null);
  const navigate = useNavigate();

  function handleChange(event) {
    const { name, value } = event.target;
    setFormData((prevData) => ({
      ...prevData,
      [name]: value,
    }));
  }


  async function handleSubmit(event) {
    event.preventDefault();

    let cepData = null;

    if (formData.cep) {
      cepData = await fetchCep(formData.cep);
      if (cepData) {
        setCepInfo(cepData);
      }
    }

    const newCard = {
      nome: formData.nome,
      telefone: formData.telefone,
      url: formData.url,
      opcao: formData.opcao,
      pago: formData.pago,
      cepInfo: cepData
    };

    saveCard(newCard);

    navigate('/mainpage', {state: {nome: formData.nome, 
      telefone: formData.telefone,
      url: formData.url,
      opcao: formData.opcao,
      pago: formData.pago,
      cepInfo: cepData }})

    console.log("Dados do Form", {...formData, cepInfo});
  }

  return (
    <section>
      <form onSubmit={handleSubmit} className="formularioEstilo">
        <div className="grupoInputEstilo">
          <label htmlFor="nome">Nome:</label>
          <input
            type="text"
            id="nome"
            name="nome"
            value={formData.nome}
            onChange={handleChange}
            required
            className="inputEstilo"
          />
        </div>

        <div className="grupoInputEstilo">
          <label htmlFor="telefone">Telefone:</label>
          <input
            type="tel"
            id="telefone"
            name="telefone"
            value={formData.telefone}
            onChange={handleChange}
            required
            className="inputEstilo"
          />
        </div>
        <div className="grupoInputEstilo">
          <label htmlFor="telefone">Cep:</label>
          <input
            type="tel"
            id="cep"
            name="cep"
            value={formData.cep}
            onChange={handleChange}
            required
            className="inputEstilo"
          />
        </div>

        <div className="grupoInputEstilo">
          <label htmlFor="url">URL:</label>
          <input
            type="url"
            id="url"
            name="url"
            value={formData.url}
            onChange={handleChange}
            className="inputEstilo"
          />
        </div>

        <div className="radioInputEstilo">
          <p>Egresso/Convidado</p>
          <label>
            <input
              type="radio"
              name="opcao"
              value="egresso"
              checked={formData.opcao === "egresso"}
              onChange={handleChange}
            />
            Egresso
          </label>
          <label style={{ marginLeft: "10px" }}>
            <input
              type="radio"
              name="opcao"
              value="convidado"
              checked={formData.opcao === "convidado"}
              onChange={handleChange}
            />
            Convidado
          </label>
        </div>
        <div className="radioInputEstilo">
          <p>Pago</p>
          <label>
            <input
              type="radio"
              name="pago"
              value="sim"
              checked={formData.pago === "sim"}
              onChange={handleChange}
            />
            Sim
          </label>
          <label style={{ marginLeft: "10px" }}>
            <input
              type="radio"
              name="pago"
              value="nao"
              checked={formData.pago === "nao"}
              onChange={handleChange}
            />
            Não
          </label>
        </div>

        <button type="submit" className="botaoEstilo">
          Cadastrar
        </button>
      </form>
    </section>
  );
}

export default Form;