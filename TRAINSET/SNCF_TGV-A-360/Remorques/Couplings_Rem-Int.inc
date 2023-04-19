	Comment( Couplings_Rem-Int.inc )

    	comment(-------- Attelages remorques 2 à 9 --------)

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
