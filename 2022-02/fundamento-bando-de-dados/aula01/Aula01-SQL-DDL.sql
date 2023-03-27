-- aqui estou comentando
/*comentnario em bloco*/
-- padrao de nomes
-- tabelas plural
-- atributos singular
-- snake_case( em sql)
-- camelCase(js)
-- PascalCase(outras linguagens)
/*Sintaxe criar tabela
 create table nome_tabela(
 nome_atributo | dominio | vazios | chaves,
 nome_atributo | dominio | vazios | chaves,
 
 
 );
 */
create table clientes(
    id not null primary key,
    nome varchar(100) not null,
    CPF varchar(14) not null unique
);

create table enderecos(
    id int NOT null primary key,
    logradouro varchar(100) not null,
    numero char(10),
    bairro varchar(100),
    cidade varchar(100),
    estado char(2),
    id_cliente int not null,
    constraint clientes_tem_enderecos foreign key(id_client) references clientes(id)
);

create table engenheiros(
    id int NOT NULL primary key,
    nome varchar(100) not null
);

create table projetos(
    id int NOT NULL primary key,
    nome varchar(250) not null
);

create table atuacao(
    id int not null primary key,
    funcao varvhar(20),
    idengenheiro int not null,
    idprojeto int not null,
    constraint engenheiros_atuacao foreign key(id_engenheiros) references engenheiros(id),
    constraint projetos_atuacao foreign key(id_projeto) references projetos(id),
);

--atividade slide 18
create table alunos(
    id int not null primary key,
    nome varchar(100) not null
);

create table departamentos(
    id int not null primary key,
    nome varchar(100) not null,
);

create table curso(
    id int not null primary key,
    nome varchar(100) not null,
    id_departamento int not null,
    constraint departamentos_curso foreign key(id_departamento) references departamentos(id),
);

create table professor(
    id int not null primary key,
    nome varchar(100) not null,
);

create table disciplina(
    id int not null primary key,
    nome varchar(100) not null,
    id_professor int not null,
    constraint professor_disciplina foreign key(id_professor) references professor(id),
);

create table matricula(
    id_disciplina int not null,
    id_aluno int not null,
    data_materia date,
    constraint disciplina_matricula foreign key(id_disciplina) references disciplina(id),
    constraint alunos_matricula foreign key(id_aluno) references alunos(id),
);

--Ativ. Coordenação de gestão de pessoas corrigido

create table colaboradores(
    id_colaborador int auto_increment primary key,
    nome varchar(100) not null,
    email varchar(100) not null,
    senha char(10) not null,
    num_matricula varchar(20) not null unique,
     id_coordenador int,
    constraint colaboradores_fk_coordenadores
   
       foreign key (id_coordenador)
);

create table departamentos(
    id int auto_increment primary key,
    nome varchar(100) not null

);

create table comentarios(
    id_comentario int primary key,
    data_comentario date,
    hora char(5),
    id_colaborador int not null,
    constraint colaboradores_comentarios foreign key(id_colaborador) references colaboradores(id)
    
);

create table projetos(
    id_projeto int auto_increment primary key,
    estimativaduracao varchar(10) not null,
    nome varchar(100) not null,
    descricao varchar(500),
    id_colaborador int not null,
    constraint colaboradores_projetos foreign key(id_colaborador) references colaboradores(id)
);

create table melhoriasUso(
    id_projeto int not null,
    melhorias varchar(300) not null,
    constraint projetos_melhoriasUso foreign key(id_projeto) references projetos(id)
);

create table social(
     id_projeto int not null,
     publicBeneficiado varchar(200) not null,
     constraint projetos_social foreign key(id_projeto) references projetos(id)

);

