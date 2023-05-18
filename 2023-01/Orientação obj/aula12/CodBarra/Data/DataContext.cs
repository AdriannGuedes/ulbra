using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using CodBarra.Domain;
using Microsoft.EntityFrameworkCore;

namespace CodBarra.Data
{
    public class DataContext : DbContext
    {
        public DbSet<CodiBarra> CodBarras { get; set; }

        public string DbPath { get; }

        public DataContext()
        {
            var folder = Environment.SpecialFolder.LocalApplicationData;
            var path = Environment.GetFolderPath(folder);
            DbPath = System.IO.Path.Join(path, "codBarras.db");
        }

        protected override void OnConfiguring(DbContextOptionsBuilder options)
        => options.UseSqlite($"Data Source={DbPath}");
    }
}