proc.c: 
	++++++++++++++++++++++
	fork(){...}
	/*adicionado formula para obter o tamanho de passo de cada processo*/
	np->passo = 10000/tickets;

	{...}

	scheduler(){...}
    /*Percorre linearmente a tabela de processos procurando o menor. Ao terminar de percorrer, já está apontando para o menor.
    No pior caso terá de percorrer os Nproc processos  */

	menor = ptable.proc;
	for(p = ptable.proc; p < &ptable.proc[NPROC]; p++){
		if(p->state == RUNNABLE && p->qtd*p->passo < menor->qtd*menor->passo)
			menor = p;      
	}
    p = menor;
    {...}

    procdump(void){...}
    /* adicionado a impressão do tamanho do passo de cada processo e a quantidade de passos dados
    */
    cprintf("%d %s %s %d %d", p->pid, state, p->name, p->passo, p->qtd);
    {...}


    ---------------------------

    rand()
    srand()