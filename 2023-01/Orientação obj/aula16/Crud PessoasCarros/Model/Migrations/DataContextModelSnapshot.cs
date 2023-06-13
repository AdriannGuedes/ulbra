﻿// <auto-generated />
using System;
using Crud_PessoasCarros.Data;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using Microsoft.EntityFrameworkCore.Storage.ValueConversion;

#nullable disable

namespace Crud_PessoasCarros.Migrations
{
    [DbContext(typeof(DataContext))]
    partial class DataContextModelSnapshot : ModelSnapshot
    {
        protected override void BuildModel(ModelBuilder modelBuilder)
        {
#pragma warning disable 612, 618
            modelBuilder.HasAnnotation("ProductVersion", "7.0.5");

            modelBuilder.Entity("Crud_PessoasCarros.Domain.Entities.Carro", b =>
                {
                    b.Property<int>("Id")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("INTEGER");

                    b.Property<int>("Ano")
                        .HasColumnType("INTEGER");

                    b.Property<string>("Marca")
                        .HasColumnType("TEXT");

                    b.Property<string>("Modelo")
                        .HasColumnType("TEXT");

                    b.HasKey("Id");

                    b.ToTable("Carros");
                });

            modelBuilder.Entity("Crud_PessoasCarros.Domain.Entities.Cidade", b =>
                {
                    b.Property<int>("Id")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("INTEGER");

                    b.Property<string>("Nome")
                        .HasColumnType("TEXT");

                    b.HasKey("Id");

                    b.ToTable("Cidades");
                });

            modelBuilder.Entity("Crud_PessoasCarros.Domain.Entities.Pessoa", b =>
                {
                    b.Property<int>("Id")
                        .ValueGeneratedOnAdd()
                        .HasColumnType("INTEGER");

                    b.Property<string>("Endereco")
                        .HasColumnType("TEXT");

                    b.Property<string>("Nome")
                        .HasColumnType("TEXT");

                    b.Property<string>("Telefone")
                        .HasColumnType("TEXT");

                    b.Property<int?>("cidadeId")
                        .HasColumnType("INTEGER");

                    b.HasKey("Id");

                    b.HasIndex("cidadeId");

                    b.ToTable("Pessoas");
                });

            modelBuilder.Entity("Crud_PessoasCarros.Domain.Entities.Pessoa", b =>
                {
                    b.HasOne("Crud_PessoasCarros.Domain.Entities.Cidade", "cidade")
                        .WithMany("pessoas")
                        .HasForeignKey("cidadeId");

                    b.Navigation("cidade");
                });

            modelBuilder.Entity("Crud_PessoasCarros.Domain.Entities.Cidade", b =>
                {
                    b.Navigation("pessoas");
                });
#pragma warning restore 612, 618
        }
    }
}
