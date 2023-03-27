--mostrtar todos os produtos que foram vendidos no mes de out/2022
categorias(id,nome)
clientes(id,nome)
pedidos(id,data,id_cliente)
produtos(descrição,id,valor_unit,id_categoria)
pedidos_itens(id,id_pedido,id_produto,qtd,val_unit)

select pd.id, pd.descrição, pi.valor
from pedidosP, produtosPD, produtos_itensPI
where P.id=PI.id_pedido and PD.id= PI.id_produto

order by pd.descrição asc

--quantos produtos tem cadastrado por categoria

select C.nome, count(p.id)
from produtos P, categorias C
where C.id = P.id_catwgoria
group by C.nome

--mostrta a categoria que tem mias produtos cadastrados

select C.nome, count(p.id)
from produtos P, categorias C
where C.id = P.id_catwgoria
group by C.nome
order by quantos des
limit 1

--me mostra qunatos produtos tem por categoriq e considere
-- o valor somente os produtos que custam acima de 100 reais 

select C.nome, count(p.id)
from produtos P, categorias C
where C.id = P.id_categoria and valor_unit >100
group by C.nome
having quantos >=50

--resul

nome_categoria   Quantosprodutos
medicamentos          101
embalagens            349

--qual a media de preco de produto por categoria

select C.nome, avg(p.valor_unit) as media_preço
from produtos P, categorias C
where C.id = P.id_categoria 
group by C.nome
having media_preço >=200

--somente a categoria q tem a maior media de preço

select C.nome, avg(p.valor_unit) as media_preço
from produtos P, categorias C
where C.id = P.id_categoria 
group by C.nome
having media_preço >=200
order by media_preço desc 
limit 1

--usando join

select C.nome, avg(p.valor_unit) as media_preço
from produtos P inner join categorias C on C.id = P.id_categoria 
group by C.nome


--todos os produtos que foram pedidos, a qtd, valor unitario e a soma de cada item

select pd.id as codigo, pd.descrição as nome_prod,
       pi.valor_unit as valor_unit_ped
       pi.qtd,
       pi.qtd*pi.valor_unit as valor_total_item
from produtos inner join pedidos_itens PI on PI.id_pedido = PD.id

codigo  nome_prod   valor_unit_ped  valor_total_item

--todos os produtos que foram pedidos, a qtd, valor unitario e a soma de cada item e o nome da categoria 

select pd.id as codigo, pd.descrição as nome_prod,
       pi.valor_unit as valor_unit_ped
       pi.qtd,
       pi.qtd*pi.valor_unit as valor_total_item, C.nome as categoria
from produtos inner join pedidos_itens PI on PI.id_pedido = PD.id inner join categorias C on C.id = pd.id_categoria

codigo  nome_prod   valor_unit_ped  valor_total_item   categoria

--todos os produtos que foram pedidos, a qtd, valor unitario e a soma de cada item e  
-- o nome da categoria e tambem o nome do cliente que pediu

select pd.id as codigo, pd.descrição as nome_prod,
       pi.valor_unit as valor_unit_ped
       pi.qtd,
       pi.qtd*pi.valor_unit as valor_total_item, C.nome as categoria
from produtos 
inner join pedidos_itens PI on PI.id_pedido = PD.id 
inner join categorias C on C.id = pd.id_categoria
inner join pedidos P on p.id = pedidos_itens.id_pedido
inner join clientes C on c.id = p.id_cliente

codigo  nome_prod   valor_unit_ped  valor_total_item   categoria nome_cliente













