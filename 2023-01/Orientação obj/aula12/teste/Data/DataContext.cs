using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using teste.Domain;

namespace teste.Data
{
    public class DataContext: DbContext
    {
        public DbSet<Person> Persons { get; set; }
        public DbSet<Product> Products { get; set; }

        public string DbPath { get; }
        public DataContext()
        {
          var folder = Environment.SpecialFolder.LocalApplicationData;
          var path = Environment.GetFolderPath(folder);
          DbPath = System.IO.Path.Join(path, "teste.db");

        }

         protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");
        
    }
}