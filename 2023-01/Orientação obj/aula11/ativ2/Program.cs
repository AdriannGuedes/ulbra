using ativ2;

IPessoa professor = new Professor("Cassio", 40);
IPessoa aluno = new Aluno("Adrian", 19);

Escola escola = new Escola();

escola.ApresentarPessoa(professor);
escola.ApresentarPessoa(aluno);