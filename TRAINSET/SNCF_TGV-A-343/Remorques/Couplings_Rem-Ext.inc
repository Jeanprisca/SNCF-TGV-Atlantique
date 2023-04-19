	Comment( Couplings_Rem-Ext.inc )

    	comment(-------- Attelages remorques 1 et 10 --------)

	Coupling (		
		Type ( Bar )
		Spring (
			Stiffness ( 2e7N/m 0 )
			Damping ( 0.2e7N/m/s 0 )
			Break ( 1e7N 0 )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
		CouplingUniqueType ( "TGV-Remorques" )
		)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s)
			Break ( 1e7N 1e7N )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
	)
