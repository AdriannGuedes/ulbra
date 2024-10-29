import React from 'react';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import HomePage from './pages/HomePage.jsx';
import Cabecalho from './components/cabecalho/cabecalho.jsx'
import MainPage from './pages/MainPage.jsx';


function App() {
  return (
    <Router>
      <Cabecalho/>
      <Routes>
        <Route path="/" element={<HomePage />}/> 
        <Route path="/mainpage" element={<MainPage />}/>
      </Routes>
    </Router>
  );
}

export default App;
