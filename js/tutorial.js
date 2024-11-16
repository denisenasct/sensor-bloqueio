// Função para destacar o passo atual ao rolar a página
window.addEventListener("scroll", () => {
  const passos = document.querySelectorAll(".passo");

  passos.forEach((passo) => {
    const rect = passo.getBoundingClientRect();
    if (rect.top >= 0 && rect.top < window.innerHeight / 2) {
      passo.classList.add("highlight");
    } else {
      passo.classList.remove("highlight");
    }
  });
});

// Função para rolar até o vídeo tutorial
const videoTutorial = document.querySelector(".video-tutorial");
const scrollButton = document.createElement("button");
scrollButton.textContent = "Ver Vídeo Tutorial";
scrollButton.classList.add("scroll-button");

scrollButton.addEventListener("click", () => {
  videoTutorial.scrollIntoView({ behavior: "smooth" });
});

document.body.appendChild(scrollButton);
