import React from "react";
import { Link } from "react-router-dom";
import "./Nav.css"

function Nav() {
    return (
        <nav className="navbar">
            <Link to="/" className="navbar-link">Home</Link>
            <Link to="/contato" className="navbar-link">Contato</Link>
            <Link to="/sobre" className="navbar-link">Sobre</Link>
        </nav>

    );
}

export default Nav;