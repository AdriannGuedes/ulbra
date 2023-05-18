using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace Crud_PessoasCarros.Migrations
{
    /// <inheritdoc />
    public partial class AddCityManyPeople : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<int>(
                name: "cidadeId",
                table: "Pessoas",
                type: "INTEGER",
                nullable: true);

            migrationBuilder.CreateTable(
                name: "Cidades",
                columns: table => new
                {
                    Id = table.Column<int>(type: "INTEGER", nullable: false)
                        .Annotation("Sqlite:Autoincrement", true),
                    Nome = table.Column<string>(type: "TEXT", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Cidades", x => x.Id);
                });

            migrationBuilder.CreateIndex(
                name: "IX_Pessoas_cidadeId",
                table: "Pessoas",
                column: "cidadeId");

            migrationBuilder.AddForeignKey(
                name: "FK_Pessoas_Cidades_cidadeId",
                table: "Pessoas",
                column: "cidadeId",
                principalTable: "Cidades",
                principalColumn: "Id");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropForeignKey(
                name: "FK_Pessoas_Cidades_cidadeId",
                table: "Pessoas");

            migrationBuilder.DropTable(
                name: "Cidades");

            migrationBuilder.DropIndex(
                name: "IX_Pessoas_cidadeId",
                table: "Pessoas");

            migrationBuilder.DropColumn(
                name: "cidadeId",
                table: "Pessoas");
        }
    }
}
