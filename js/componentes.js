// Função para exibir mais informações sobre o componente ao clicar no botão
const buttons = document.querySelectorAll(".button-info");

buttons.forEach((button) => {
  button.addEventListener("click", () => {
    const parent = button.parentElement;
    const details = parent.querySelector("p");

    if (details.style.display === "block") {
      details.style.display = "none";
      button.textContent = "Clique aqui para saber mais";
    } else {
      details.style.display = "block";
      button.textContent = "Fechar informações";
    }
  });
});
