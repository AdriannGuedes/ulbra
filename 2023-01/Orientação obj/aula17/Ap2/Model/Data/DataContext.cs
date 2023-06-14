using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Ap2.Domain.Entities;
using Microsoft.EntityFrameworkCore;

namespace Ap2.Data
{
    public class DataContext : DbContext
    {
        public DbSet<Carro> Carros {get;set;}

        public DbSet<Moto> Motos {get;set;}

        public DbSet<Vaga> Vagas {get;set;}
        public string DbPath { get; }
        public DataContext()
        {
            string folder = Directory.GetCurrentDirectory();
            DbPath = System.IO.Path.Join(folder, "ap2_refatorando_ap1_efc.db");
        }

         protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");

        protected override void OnModelCreating(ModelBuilder model)
        {
            base.OnModelCreating(model);

            model.Entity<Veiculo>()
                .HasIndex(v => v.Placa)
                .IsUnique();//aqui fica definido que a propriedade placa tem um indice único na tabela
                //ou seja não terão 2 placas iguais no banco de dados

            model.Entity<Vaga>()
                .HasOne(v => v.Estacionado)
                .WithOne()//aqui fica definido que uma vaga pode estar associada a um unico veiculo 
                .HasForeignKey<Vaga>(v=>v.VeiculoId)//indica que a propriedade VeiculoId será a chave estrangeira e 
                                                   //fará relação com a tabela veiculo
                .OnDelete(DeleteBehavior.SetNull);
                //aqui quando for excluido um veiculo relacionado a vaga, a mesma é setada como mull
                //para indicar que está livre novamente
        }
        
    }
}