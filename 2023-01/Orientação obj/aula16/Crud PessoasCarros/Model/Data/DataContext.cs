using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Crud_PessoasCarros.Domain.Entities;
using Microsoft.EntityFrameworkCore;

namespace Crud_PessoasCarros.Data
{
    public class DataContext : DbContext
    {
        public DbSet<Pessoa> Pessoas {get;set;}

        public DbSet<Carro> Carros {get;set;} 

        public DbSet<Cidade> Cidades {get;set;}

        public string DbPath { get; }
        public DataContext()
        {
          
          string path = Directory.GetCurrentDirectory();
            DbPath = System.IO.Path.Join(path, "teste.db");

        }

         protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");
        
    }
}