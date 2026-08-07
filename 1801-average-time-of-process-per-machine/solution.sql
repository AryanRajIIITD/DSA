select A1.machine_id,round(avg(a2.timestamp-a1.timestamp),3) as processing_time  from Activity A1 inner join Activity A2 
where a1.machine_id=a2.machine_id and a1.activity_type ='start' and a2.activity_type='end' group by A1.machine_id
