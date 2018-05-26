//Agendamento de Consultas

#include <stdio.h>
#include <string.h>

struct Pessoa {
	char nome[30];
	char esp [30];
	char email [50];
	int tel;
};


int main (void) {
	/* Pessoa 1 */
	struct Pessoa p1;
	strcpy( p1.nome, "Amarildo Batista da Costa");
	strcpy( p1.esp, "Dermatologista");
	strcpy( p1.email, "amarildo.costa@medico.com");
	p1.tel = 22340989;

	/* Pessoa 2 */
	struct Pessoa p2;
	strcpy( p2.nome, "Amanda Silva Medeiros");
	strcpy( p2.esp, "Nutricionista");
	strcpy( p2.email, "amanda.medeiros@medico.com");
	p2.tel = 2234445;

	/* Pessoa 3 */
	struct Pessoa p3;
	strcpy( p3.nome, "Bruna Lisboa Moreira");
	strcpy( p3.esp, "Pediatra");
	strcpy( p3.email, "bruna.moreira@medico.com");
	p3.tel = 22346352;

	/* Pessoa 4 */
	struct Pessoa p4;
	strcpy( p4.nome, "Benedito Rui Barbosa");
	strcpy( p4.esp, "Clínico Geral");
	strcpy( p4.email, "benedito.barbosa@medico.com");
	p4.tel = 22345433;

	/* Pessoa 5 */
	struct Pessoa p5;
	strcpy( p5.nome, "Emerson Farias Reis");
	strcpy( p5.esp, "Alergista");
	strcpy( p5.email, "emerson.reis@medico.com");
	p5.tel = 22349042;

	/* Pessoa 6 */
	struct Pessoa p6;
	strcpy( p6.nome, "Heloísa Maria Junqueira");
	strcpy( p6.esp, "Endocrinologista");
	strcpy( p6.email, "heloisa.junqueira@medico.com");
	p6.tel = 22349986;

	/* Pessoa 7 */
	struct Pessoa p7;
	strcpy( p7.nome, "Mario Hungaro Kross");
	strcpy( p7.esp, "Neurocirurgião");
	strcpy( p7.email, "mario.kross@medico.com");
	p7.tel = 22347654;

	/* Pessoa 8 */
	struct Pessoa p8;
	strcpy( p8.nome, "Olívia Ribeiro Cunha");
	strcpy( p8.esp, "Clínico geral");
	strcpy( p8.email, "olivia.cunha@medico.com");
	p8.tel = 22343456;

	/* Pessoa 9 */
	struct Pessoa p9;
	strcpy( p9.nome, "Ricardo Oliveira Mundi");
	strcpy( p9.esp, "Otorrinolaringologista");
	strcpy( p9.email, "ricardo.mundi@medico.com");
	p9.tel = 22349900;

	/* Pessoa 10 */
	struct Pessoa p10;
	strcpy( p10.nome, "Vivian Santana Cruz");
	strcpy( p10.esp, "Ginecologista");
	strcpy( p10.email, "vivian.cruz@medico.com");
	p10.tel = 22341234;

	int n;

	printf ("Abaixo você pode verificar os nomes dos(as) médicos(as) que atendem em nosso consultório: \n\n");
	printf ("1 - Amarildo Batista da Costa \n2 - Amanda Silva Medeiros \n3 - Bruna Lisboa Moreira \n4 - Benedito Rui Barbosa \n5 - Emerson Farias Reis \n6 - Heloísa Maria Junqueira \n7 - Mario Hungaro Kross \n8 - Olívia Ribeiro Cunha \n9 - Ricardo Oliveira Mundi \n10 - Vivian Santana Cruz\n\n");
	printf ("Digite o número correspondente ao especialista que você quer agendar: ");
	scanf ("%d",&n);
	
	if (n > 10) {
		printf ("\nNúmero digitado não corresponde a nenhum dos médicos acima.\n\n");
	}
	
	else {
		if (n == 1) {
			printf( "\nNome: %s\nEspecialidade: %s\nE-mail: %s\nTelefone: %d\n\n", p1.nome, p1.esp, p1.email, p1.tel);
			printf ("Entre em contato com o ramal de %s para concluir o agendamento.\n\n",p1.nome);
		}
		else if (n == 2) {
			printf( "\nNome: %s\nEspecialidade: %s\nE-mail: %s\nTelefone: %d\n\n", p2.nome, p2.esp, p2.email, p2.tel);
			printf ("Entre em contato com o ramal de %s para concluir o agendamento.\n\n",p2.nome);
		}
	}

	return 0;
}
