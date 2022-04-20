int ps(){

struct proc *p;

acquire(&ptable.lock);
cprintf("name \t pid \t state \t \n");
for(p=patable.proc;p<&ptable.proc[NPROC];p++){

  if(p->state==SLEEPING)
        cprintf("%s \t %d \t SLEEPING \t",p->name,p->pid);
  else if(p->state==RUNNING)
        cprintf("%s \t %d \t RUNNING  \t",p->name,p->pid);
  else if(p->state==RUNNABLE)
        cprintf("%s \t %d \t RUNNABLE \t",p->name,p=>pid);
 }
 release(&ptable.lock);
 
 return 22;
 
 }
