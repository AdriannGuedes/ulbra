1- Produto,Cidade,Filial,Vende,Empregado;

2-

3-



select p.nome, sum(vp.quant) as total
from produtos p
        inner join vendas produtos vp
          on  p.id = vp.produto_id
        inner join vendas v
          on v.id = vp.venda_id
group by p.nome

where v.data => '2023-02-01' and v.data <= '2023-02-28'
   and p.nome='agua mineral'

b)
select nome as produto, max(valor) as mais_alto
from produtos
group by nome
order by mais_alto desc
limit 1

---5 clientes que mais compraram (considere somente os produtos que o valor atual é igual ao valor que )

select c.nome as cliente, sum(pv.qtd * pv.valor_unit) as valor_total_compra
from clientes c 
        inner join vendas v on v.id_cliente = c.id
        inner join produtos_vendas pv on v.id = pv.venda_id
where v.data => '2023-02-01' and v.data <= '2023-02-28' and  pv.valor_unit = p.valor
group by c.nome
order by c.valor_total_compra desc
limit 5   


   