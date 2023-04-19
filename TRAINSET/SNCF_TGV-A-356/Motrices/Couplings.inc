	Comment( Couplings.inc )

    	comment(-------- Attelage --------)

	Coupling (
		Type ( Automatic )
		Spring (
			Stiffness ( 1e6N/m 2e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s)
			Break ( 1e7N 1e7N )
			r0 ( 10cm 40cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
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
