export async function fetchCep(cep) {
  try {
    const resposta = await fetch(`https://viacep.com.br/ws/${cep}/json/`);
    const dataJson = await resposta.json();
    if (!dataJson.erro) {
      return dataJson;
    } else {
      alert("CEP inválido.");
      return null;
    }
  } catch (error) {
    console.error("Erro ao buscar o CEP:", error);
    alert("Erro ao buscar o CEP.");
    return null;
  }
}