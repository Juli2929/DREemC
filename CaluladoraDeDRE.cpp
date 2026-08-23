#include <stdio.h> //biblioteca padrao do C para entradas e saidas de dados
#include <locale.h>//bibliotecas Br-Portuguese
int main(){
	setlocale(LC_ALL, "Portuguese");//(Biblioteca que corrigi para o português seja entrada e saidas de dados linha 3 até linha 4)
	char NomeEmpresa[50], NomeSocial[50];//(linha 11 até linha 14)
	long long ReceitaBruta, Deducoes, ReceitaLiquida;//(linha 17 até linha 22)
	long long cmv, LucroBruto;//(linha 23 até linha 26)
	long long DespesasOperacionais, OutrasReceitas, OutrasDespesas, LucroOperacional;//(linha 28 até linha 35)
	long long ImpostoRenda, ResultadoLiquido;
	printf("CRIADOR = Julio Cesar Pereira Da Silva                                          WHATSAPP = 044-99902-2166\n");//telefone de contado e nome do criador
printf("                                       ====== SEJA BEM-VINDO ======\n");///(Painel de inicio linha 9 até linha 12)
printf("                                       ====== S.O.S CONTABIL ======\n");
printf("                                       ====== CALCULE SUA DRE ======\n");
printf("                                           COM BASE  NO (CPC 26)\n");
printf("\nDigite o nome da sua empresa:");
scanf("%s", NomeEmpresa);
printf("\nDigite seu nome social:");
scanf("%s", NomeSocial);
printf("\nReceita Bruta De Vendas R$:");//Entrada da receita bruta de vendas
scanf("%lld", &ReceitaBruta);
printf("\n(-) Deduções E Abatimentos R$:");//Entrada das deduções
scanf("%lld", &Deducoes);
ReceitaLiquida = ReceitaBruta - Deducoes;//(Processamento da Receita Liquida e deduções)
printf("==== A Receita Liquida foi de R$:%lld", ReceitaLiquida);// saida da receita liquida
printf("\n(-) Custo Das Mercadorias Vendidas (CMV) R$:");
scanf("%lld", &cmv);
LucroBruto = ReceitaLiquida - cmv;//(Processamento Do Lucro Bruto e cmv)
printf("\n==== O Lucro Bruto foi de R$:%lld", LucroBruto);// saida do lucro bruto
printf("\n(-) Despesas Operacionais R$:");///entrada das despesas para o calculo do lucro operacional
scanf("%lld", &DespesasOperacionais);
printf("\n(+) Outras Receitas R$:");
scanf("%lld", &OutrasReceitas);
printf("\n(-) Outras Despesas R$:");
scanf("%lld", &OutrasDespesas);
LucroOperacional = (LucroBruto - DespesasOperacionais) + OutrasReceitas - OutrasDespesas;//(Processamento do lucro operacional)
printf("\n==== O Lucro Operacional foi de R$: %lld", LucroOperacional);//saida do lucro operacional
printf("\n(-) Imposto De Renda e contribuição Social (IRPJ/CSLL) R$:");
scanf("%lld", &ImpostoRenda);
ResultadoLiquido = LucroOperacional - ImpostoRenda;//(Processamento do lucro liquido
printf("\n==== Resultado Liquido Do Exercicio R$:%lld", ResultadoLiquido);/// o objetivo final de uma DRE e obter o resultado liquido do exercio 
	return 0;
}





