/*faça uma query que liste todos os protudot acima de mil reais*/

1 from product
2 where preço>=1000
3 select id, nome, preco

-- na consulta anterior crie uma nova coluna acrescentando 10% ao preço

1 from product
2 where preço>=1000
3 select id, nome, preco,(preco*1.10) es novoPreço

-- e cadastrados no mes de novembro

1 from product
2 where preço>=1000 and data_cad >=2022-11-1  and data_cad >=2022-11-30
3 select id, nome, preco,(preco*1.10) es novoPreço


-- listar a soma dos produtos cadastrados no mes de setembro e outubro 

1 from product
3 select SUM(preço) as SOMA
2 where data_cad between '2022-09-1' and '2022-10-31'


-- qunatas tuplas possui na tabela             

select count (id) as quantos from product

-- unir tabelas

select *
from product P, categorias C
where P.id_categorias = C.id

-- unir tabelas organizadas

select P.id, P.nome,C.nome, as categorias
from product P, categorias C
where P.id_categorias = C.id

from vendas, vendas_itens, produtos
where vendas.id =  vendas_itens.id venda and 
produtct.id = vendas_item.id_product and
 vendas.id_clientes=104

-- quais produtos de categorias que foram vendidos e começam por celular 

from vendas, vendas_itens, produtos
where vendas.id =  vendas_itens.id venda and 
produtct.id = vendas_item.id_product and
P.nome like 'celular%'
--% serve para buscar o restante do nome junto
--like serve para buscar conjunto de caracteres

-- mostrar os produtos que foram vendidos no mes de outubro e o valor total de cada produto vendido

from vendas, vendas itens, product
where v.id = vi.id_venda and VI.id_produt = p.id and 
V.data between '2022-10-1' and '2022-10-31'
select P.id, P.nome, VI.qtd, VI.vlrunit,(valor_unit*qtd) as total

--contagem de alunos em uma sala (relacao 1-N)

select count(id)
from alunos

--contagem de alunos por sala (relacao N-N)

select sala count(id) as num
from alunos
group by sala
--contagem com relação com outro atributo (group by)


select sala count(id) as num
from alunos
where sala = 326 and sala = 327
group by sala
--contagem com relação com outro atributo (group by)

-- qual é o preço mais alto de produtos por categoria 

from product, categorias
where C.id = P.id_categoria
select C.nome as categoria, max preco as val_alto
group by c.nome

--order by ordena 

--lista de produtos ordenados do maior ao menor preço

select*
from product
order by preço desc

--categoria que tem os preços mais altos 

from product, categorias
where C.id = P.id_categoria
select C.nome as categoria, max preco as val_alto
group by c.nome
order by val_alto desc

--ESTUDA CABEÇÃO