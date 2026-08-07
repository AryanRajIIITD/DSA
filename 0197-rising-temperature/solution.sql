select w2.id from Weather W1 inner join Weather W2 on datediff(W2.recordDate,W1.recordDate)=1 where w1.temperature<W2.temperature
