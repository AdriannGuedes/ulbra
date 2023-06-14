using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Ap2.Data.Repositories;
using Ap2.Domain.Entities;
using Ap2.Domain.Interfaces;
using Microsoft.AspNetCore.Mvc;

namespace Ap2.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class CarroController : ControllerBase
    {



        private readonly ICarroRepository _repository;

        public CarroController()
        {
            _repository = new CarroRepository();
        }

        [HttpGet]
        public IEnumerable<Carro> Get()
        {
            return _repository.GetAll() ;
        }

        [HttpGet ("{id}")]
        public IActionResult Get(int id)
        {
            var item = _repository.GetById(id);
            if(item == null)
            {
                 return Ok(new{StatusCode = 400, 
                 message = "Veículo não existe", item});

            }else
            {
            return Ok(new{StatusCode = 200,
             message = "Ok", item});
            }
        }

        [HttpPost]
        public IActionResult Post([FromBody] Carro veiculo)
        {
            _repository.Save(veiculo);
            return Ok(new {
                sttsCode = 200,
                message = "Carro cadastrado",
                veiculo
            });
        }

        [HttpPut]
        public IActionResult Put([FromBody]Carro veiculo)
        {
            _repository.Update(veiculo);
            return Ok(new {
                sttsCode = 200,
                message = "Alterado",
                veiculo
            });
        }

         [HttpDelete("{id}")]
        public IActionResult Delete(int id)
        {
            if(_repository.Delete(id))
                return Ok(new {
                    sttsCode = 200,
                    message = "Apagado"
                });
            else
                return Ok(new {
                    sttsCode = 500,
                    message = "Não encontrado"
                });
        }
    }
}
